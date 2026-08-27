/* FUN_2c49ab84 @ 0x2c49ab84 */

float FUN_2c49ab84(float param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 < 0.0) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            for (; param_1 <= -9.0; param_1 = param_1 + 9.0) {
              fVar1 = fVar1 * DAT_2c49acf8;
            }
            if (-3.0 < param_1) break;
            param_1 = param_1 + 3.0;
            fVar1 = fVar1 * DAT_2c49acf4;
          }
          if (-1.0 < param_1) break;
          param_1 = param_1 + 1.0;
          fVar1 = fVar1 * DAT_2c49acf0;
        }
        if (-0.5 < param_1) break;
        param_1 = param_1 + 0.5;
        fVar1 = fVar1 * DAT_2c49acec;
      }
      if (DAT_2c49acfc < param_1) break;
      param_1 = param_1 + DAT_2c49ace4;
      fVar1 = fVar1 * DAT_2c49ace8;
    }
  }
  else if (param_1 != 0.0) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            for (; 9.0 <= param_1; param_1 = param_1 - 9.0) {
              fVar1 = fVar1 / DAT_2c49acf8;
            }
            if (param_1 < 3.0) break;
            fVar1 = fVar1 / DAT_2c49acf4;
            param_1 = param_1 - 3.0;
          }
          if (param_1 < 1.0) break;
          fVar1 = fVar1 / DAT_2c49acf0;
          param_1 = param_1 - 1.0;
        }
        if (param_1 < 0.5) break;
        fVar1 = fVar1 / DAT_2c49acec;
        param_1 = param_1 - 0.5;
      }
      if (param_1 < DAT_2c49ace0) break;
      fVar1 = fVar1 / DAT_2c49ace8;
      param_1 = param_1 - DAT_2c49ace4;
    }
  }
  return fVar1;
}

