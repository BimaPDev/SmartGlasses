/* FUN_140e0738 @ 0x140e0738 */

void FUN_140e0738(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int extraout_r3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar1 = 0;
  iVar3 = (param_4 + 8) / 9;
  iVar2 = 1;
  iVar6 = param_4;
  do {
    if (iVar3 <= iVar2) {
      iVar1 = FUN_140e05e4(param_1,iVar1,iVar2,iVar3,iVar6);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x14) = param_5;
        *(undefined4 *)(iVar1 + 0x10) = 1;
        if (param_3 < 10) {
          pbVar4 = (byte *)(param_2 + 10);
          param_3 = 9;
        }
        else {
          pbVar4 = (byte *)(param_2 + 9);
          do {
            pbVar5 = pbVar4 + 1;
            iVar1 = FUN_140e06a8(param_1,iVar1,10,*pbVar4 - 0x30);
            pbVar4 = pbVar5;
          } while (pbVar5 != (byte *)(param_2 + param_3));
          pbVar4 = (byte *)(param_2 + 9) + param_3 + -8;
        }
        param_3 = param_3 - (int)pbVar4;
        for (; (int)(pbVar4 + param_3) < param_4; pbVar4 = pbVar4 + 1) {
          iVar1 = FUN_140e06a8(param_1,iVar1,10,*pbVar4 - 0x30);
        }
        return;
      }
      FUN_140da8c8(DAT_140e07c8,0xce,0,DAT_140e07c4);
      iVar1 = extraout_r1;
      iVar2 = extraout_r2;
      iVar3 = extraout_r3;
    }
    iVar2 = iVar2 << 1;
    iVar1 = iVar1 + 1;
  } while( true );
}

