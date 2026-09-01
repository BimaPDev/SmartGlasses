/* FUN_1009a564 @ 0x1009a564 */

undefined4 FUN_1009a564(byte *param_1,byte *param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_4 < 0x1e) {
    if (param_4 < 0x16) {
      if (param_4 == 4) {
        param_3 = param_3 << 1;
      }
      else {
        if (param_4 != 5) goto switchD_1009a58a_caseD_18;
        param_3 = param_3 * 3;
      }
      FUN_1011ea40(param_1,param_2,param_3,param_4,param_4);
    }
    else {
      switch(param_4) {
      case 0x16:
        while( true ) {
          if (param_3 < 1) break;
          *param_1 = *param_2 >> 1 | param_2[1] << 7;
          param_1[1] = param_2[1] >> 2 & 0x38 | param_2[2] << 6 |
                       (byte)(((uint)param_2[1] << 0x1c) >> 0x1d);
          param_3 = param_3 + -1;
          param_1[2] = param_2[2] & 0xfc | (byte)(((uint)param_2[2] << 0x1c) >> 0x1e);
          param_2 = param_2 + 3;
          param_1 = param_1 + 3;
        }
        break;
      case 0x17:
        while( true ) {
          if (param_3 < 1) break;
          param_3 = param_3 + -1;
          *param_1 = (*param_2 & 0x60) << 1 | *param_2 & 0x3f;
          param_1[1] = *param_2 >> 7 | param_2[1] << 1;
          param_1[2] = (char)param_2[1] >> 7;
          param_2 = param_2 + 2;
          param_1 = param_1 + 3;
        }
        break;
      default:
        goto switchD_1009a58a_caseD_18;
      case 0x1b:
        while( true ) {
          if (param_3 < 1) break;
          *param_1 = (param_2[1] & 0x1c) << 3 | *param_2 >> 3;
          param_1[1] = param_2[2] & 0xf8 | param_2[1] >> 5;
          param_3 = param_3 + -1;
          param_2 = param_2 + 3;
          param_1 = param_1 + 2;
        }
        break;
      case 0x1c:
        while( true ) {
          if (param_3 < 1) break;
          *param_1 = (param_2[1] & 0x1c) << 3 | *param_2 >> 3;
          param_1[1] = param_2[2] & 0xf8 | param_2[1] >> 5;
          param_3 = param_3 + -1;
          param_1[2] = param_2[3];
          param_2 = param_2 + 4;
          param_1 = param_1 + 3;
        }
        break;
      case 0x1d:
        while( true ) {
          if (param_3 < 1) break;
          *param_1 = (param_2[1] & 0x1c) << 3 | *param_2 >> 3;
          param_1[1] = param_2[2] & 0xf8 | param_2[1] >> 5;
          param_3 = param_3 + -1;
          param_2 = param_2 + 4;
          param_1 = param_1 + 2;
        }
      }
    }
    uVar1 = 1;
  }
  else {
switchD_1009a58a_caseD_18:
    uVar1 = 0;
  }
  return uVar1;
}

