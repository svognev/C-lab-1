char * greet(int hour,int min)
   {
      
    if (hour >= 0 && 6 > hour)
      {
          return "Good night!";
      }
      else if (hour >= 6 && hour < 11)
      {
          return "Good morning!";
      }
      else if (hour >= 11 && hour < 18)
      {
          return "Good day!";
      }
      else if (hour >= 18 && hour <= 23)
      {
          return "Good evening!";
      }
    /* if (hour >= 0 && 6 > hour)
      {
          return 1;
      }// здесь реализация
      else if (hour >= 6 && hour < 11)
      {
          return 2;
      }
      else if (hour >= 11 && hour < 18)
      {
          return 3;
      }
      else if (hour >= 18 && hour <= 23)
      {
          return 4;
      } */
   }
