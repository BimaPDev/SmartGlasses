/* FUN_14039cec @ 0x14039cec */

float FUN_14039cec(float param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 < 0.0) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            for (; param_1 <= -9.0; param_1 = param_1 + 9.0) {
              fVar1 = fVar1 * DAT_14039e5c;
            }
            if (-3.0 < param_1) break;
            fVar1 = fVar1 * DAT_14039e58;
            param_1 = param_1 + 3.0;
          }
          if (-1.0 < param_1) break;
          fVar1 = fVar1 * DAT_14039e54;
          param_1 = param_1 + 1.0;
        }
        if (-0.5 < param_1) break;
        fVar1 = fVar1 * DAT_14039e50;
        param_1 = param_1 + 0.5;
      }
      if (DAT_14039e60 < param_1) break;
      param_1 = param_1 + DAT_14039e48;
      fVar1 = fVar1 * DAT_14039e4c;
    }
  }
  else if (param_1 != 0.0) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            for (; 9.0 <= param_1; param_1 = param_1 - 9.0) {
              fVar1 = fVar1 / DAT_14039e5c;
            }
            if (param_1 < 3.0) break;
            param_1 = param_1 - 3.0;
            fVar1 = fVar1 / DAT_14039e58;
          }
          if (param_1 < 1.0) break;
          param_1 = param_1 - 1.0;
          fVar1 = fVar1 / DAT_14039e54;
        }
        if (param_1 < 0.5) break;
        param_1 = param_1 - 0.5;
        fVar1 = fVar1 / DAT_14039e50;
      }
      if (param_1 < DAT_14039e44) break;
      param_1 = param_1 - DAT_14039e48;
      fVar1 = fVar1 / DAT_14039e4c;
    }
  }
  return fVar1;
}

