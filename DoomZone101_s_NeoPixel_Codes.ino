//This is for neopixels connected to an Addafriut Huzzah
//Buttons and calling functions is not included.
void commet(void)
{

  static uint16_t pos = 0;

  for (int ii = 0; ii < NUMPIXELS; ++ii)
  {
    strip.setPixelColor(ii, strip.Color(0, 0, 100));
  }
  strip.setPixelColor(pos, strip.Color(255, 0, 0));
  strip.setPixelColor(pos - 1, strip.Color(225, 0, 0));
  strip.setPixelColor(pos - 2 , strip.Color(200, 0, 0));
  strip.setPixelColor(pos - 3 , strip.Color(175, 0, 0));
  strip.setPixelColor(pos - 4 , strip.Color(150, 0, 0));
  strip.setPixelColor(pos - 5 , strip.Color(125, 0, 0));
  strip.setPixelColor(pos - 6, strip.Color(100, 0, 0));
  strip.setPixelColor(pos - 7 , strip.Color(75, 0, 0));
  strip.setPixelColor(pos - 8 , strip.Color(50, 0, 0));
  strip.setPixelColor(pos - 9 , strip.Color(25, 0, 10));
  strip.setPixelColor(pos - 10 , strip.Color(20, 0, 20));
  strip.setPixelColor(pos - 11, strip.Color(15, 0, 30));
  strip.setPixelColor(pos - 12 , strip.Color(10, 0, 40));
  strip.setPixelColor(pos - 13 , strip.Color(5, 0, 50));

  strip.show();

  if (++pos - 20 >= NUMPIXELS) pos = 0;
}
}

void disco(void)
{
  for (int ii = 0; ii < NUMPIXELS; ++ii)
  {
    strip.setPixelColor(ii, strip.Color (0, 0, 0));
  }
  strip.setPixelColor(0, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(1, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(2, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(3, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(4, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(5, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(6, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(7, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(8, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(9, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(10, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(11, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(12, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(13, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(14, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(15, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(16, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(17, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(18, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(19, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(20, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(21, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(22, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(23, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(24, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(25, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(26, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(27, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(28, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(29, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(30, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(31, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(32, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(33, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(34, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(35, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(36, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(37, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(38, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(39, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(40, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(41, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(42, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(43, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(44, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(45, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(46, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(47, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(48, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(49, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(50, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(51, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(52, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(53, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(54, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(55, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(56, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(57, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(58, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(59, strip.Color (random(0, 255), random(0, 255), random(0, 255)));
  strip.setPixelColor(60, strip.Color (random(0, 255), random(0, 255), random(0, 255)));

  strip.show();
}
