/* FUN_100b6138 @ 0x100b6138 */

int * FUN_100b6138(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = (DAT_100b622c - DAT_100b6228) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0x1d00031,DAT_100b6234,DAT_100b6230,param_1);
  iVar2 = FUN_10112e84(param_1);
  if (iVar2 == 0) {
    FUN_100a5b78(uVar5 | 0x1d40011,DAT_100b6234,DAT_100b6238,param_1);
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = FUN_1011ea18(param_1,DAT_100b623c);
    piVar4 = DAT_100b6240;
    if (iVar3 == 0) {
      *DAT_100b6240 = iVar2;
      piVar4[1] = param_1;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[2] = 0x1000;
      piVar4[3] = 0x10000;
    }
    else {
      iVar3 = FUN_1011ea18(param_1,DAT_100b6244);
      piVar1 = DAT_100b6240;
      if (iVar3 == 0) {
        DAT_100b6240[0xc] = iVar2;
        piVar1[0xd] = param_1;
        piVar1[0x10] = 2;
        piVar1[0x11] = 2;
        piVar4 = piVar1 + 0xc;
        piVar1[0xe] = 0x1000;
        piVar1[0xf] = 0x10000;
      }
      else {
        iVar3 = FUN_1011ea18(param_1,DAT_100b6248);
        piVar4 = DAT_100b6240;
        if (iVar3 == 0) {
          DAT_100b6240[10] = 1;
          piVar4[0xb] = 1;
          piVar4[6] = iVar2;
          piVar4[7] = param_1;
          piVar4[8] = 0x1000;
          piVar4[9] = 0x10000;
          piVar4 = piVar4 + 6;
        }
        else {
          iVar3 = FUN_1011ea18(param_1,DAT_100b624c);
          piVar4 = DAT_100b6240;
          if (iVar3 == 0) {
            DAT_100b6240[0x16] = 3;
            piVar4[0x17] = 3;
            piVar4[0x12] = iVar2;
            piVar4[0x13] = param_1;
            piVar4[0x14] = 0x1000;
            piVar4[0x15] = 0x10000;
            piVar4 = piVar4 + 0x12;
          }
          else {
            FUN_100a5b78(DAT_100b6250 | uVar5,DAT_100b6234,DAT_100b6254,param_1);
            piVar4 = (int *)0x0;
          }
        }
      }
    }
  }
  return piVar4;
}

