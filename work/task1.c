int getRecommendation(char gender, float height, float weight)
   {
      if (gender == 'm')
      {
          if ((height - 100) < weight)
                  return 1;
          else if ((height - 100) > weight)
                  return -1;
          else
              return 0;
      }
      else if (gender == 'w')
        {
          if ((height - 110) < weight)
                  return 1;
          else if ((height - 110) > weight)
                  return -1;
          else
              return 0;
        }
   }
      