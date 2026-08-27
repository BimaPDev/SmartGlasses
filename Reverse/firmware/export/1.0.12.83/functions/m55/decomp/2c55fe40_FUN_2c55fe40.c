/* FUN_2c55fe40 @ 0x2c55fe40 */

void FUN_2c55fe40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = DAT_2c55fe9c;
  if (param_1[0x16] != 0) {
    if (1 < *(short *)((int)param_1 + 0x56)) {
      uVar2 = (int)*(short *)((int)param_1 + 0x56) - 1;
      *(short *)((int)param_1 + 0x56) = (short)uVar2;
      if (*(code **)(*param_1 + 0x10) == pcVar1) {
        iVar3 = (uVar2 & 0xffff) - 1;
        FUN_2c60518c(param_1[0x16],(int)(short)((short)iVar3 * ((short)param_1[0x15] + 0x1fc)),0,
                     iVar3,param_4);
      }
      else {
        (**(code **)(*param_1 + 0x10))();
      }
      FUN_2c55fae8(param_1);
      if (param_1[0x14] != 0) {
        FUN_2c606d60(param_1[0x14],0xff000000,0);
        param_1[0x14] = 0;
      }
    }
    return;
  }
  return;
}

