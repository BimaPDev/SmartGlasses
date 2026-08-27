/* FUN_1408e93c @ 0x1408e93c */

undefined4 FUN_1408e93c(byte *param_1,int param_2,byte *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1408ea80,DAT_1408ea70);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1408ea7c,DAT_1408ea70,0);
  }
  bVar1 = *param_1 >> 3;
  *param_3 = bVar1;
  uVar3 = *param_1 & 7;
  switch(bVar1) {
  case 0:
  case 5:
    if ((*param_1 & 7) != 0) goto switchD_1408e968_default;
    uVar3 = (uint)(bVar1 == 5);
    break;
  case 1:
  case 2:
    if (4 < uVar3) goto switchD_1408e968_default;
    uVar3 = 1 << uVar3 & 0xff;
    break;
  case 3:
    if (uVar3 - 1 < 2) {
      uVar3 = 1 << uVar3 & 0xff;
    }
    else {
      if (uVar3 != 4) goto switchD_1408e968_default;
      uVar3 = 0x50;
    }
    uVar3 = uVar3 & 0x3f;
    break;
  case 4:
  case 6:
  case 7:
  case 8:
    if ((uVar3 - 5 & 0xff) < 3) {
      uVar4 = 0;
      uVar3 = 1 << (uVar3 - 5 & 0xff);
      uVar6 = uVar3 & 0xff;
      *param_4 = uVar6 + 1 & 0xff;
      *param_5 = 0;
      if (param_2 == 1) {
        uVar3 = 1;
      }
      else {
        uVar5 = (uVar3 - 1) * 8;
        pbVar2 = param_1 + 1;
        do {
          uVar4 = uVar4 | (uint)*pbVar2 << (uVar5 & 0xff);
          *param_5 = uVar4;
          uVar3 = (int)(pbVar2 + 1) - (int)param_1 & 0xff;
          if (param_1 + 1 + (uVar6 - 1 & 0xff) == pbVar2) {
            return 0;
          }
          bVar7 = param_1 + param_2 + -1 != pbVar2;
          uVar5 = uVar5 - 8;
          pbVar2 = pbVar2 + 1;
        } while (bVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_1408ea78,DAT_1408ea70,uVar3,param_2);
    }
  default:
switchD_1408e968_default:
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1408ea74,DAT_1408ea70,bVar1,uVar3);
  }
  *param_4 = 1;
  *param_5 = uVar3;
  return 0;
}

