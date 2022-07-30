for (int i = maxHeightRight + 1; i < height.size() - 1; i++)
    {
        if ((min(height[i], height[maxHeightLeft]) * (i - maxHeightLeft)) > maxArea)
        {
            maxHeightRight = i;
            maxArea = (height[i] * (i - maxHeightLeft));
        }
    }