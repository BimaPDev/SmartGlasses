/* FUN_2c602454 @ 0x2c602454 */

int FUN_2c602454(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_2c606bc8();
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x1a);
    if ((bVar1 & 0x3f) == 0x3f) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c602514,0xf9,DAT_2c602510,DAT_2c602518,param_3,param_1,param_2,param_4);
    }
    *(byte *)(*(int *)(param_1 + 8) + 0x1a) = bVar1 & 0xc0 | bVar1 + 1 & 0x3f;
    iVar3 = *(int *)(param_1 + 8);
    uVar2 = FUN_2c62bebc(*(undefined4 *)(iVar3 + 0xc),(*(byte *)(iVar3 + 0x1a) & 0x3f) * 0xc);
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) +
            (short)(*(byte *)(*(int *)(param_1 + 8) + 0x1a) & 0x3f) * 0xc + -0xc) = param_2;
    *(char *)((short)(*(byte *)(*(int *)(param_1 + 8) + 0x1a) & 0x3f) * 0xc +
              *(int *)(*(int *)(param_1 + 8) + 0xc) + -4) = (char)param_3;
    *(undefined4 *)
     ((short)(*(byte *)(*(int *)(param_1 + 8) + 0x1a) & 0x3f) * 0xc +
      *(int *)(*(int *)(param_1 + 8) + 0xc) + -8) = param_4;
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xc) +
            (short)(*(byte *)(*(int *)(param_1 + 8) + 0x1a) & 0x3f) * 0xc + -0xc;
  }
  return iVar3;
}

