/* FUN_2c5cf4a4 @ 0x2c5cf4a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cf4a4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x44) == *(int *)(iVar5 + 0x48)) {
      iVar3 = FUN_2c5ced44(iVar5);
    }
    else {
      iVar3 = 0;
    }
    if (*(char *)(iVar5 + 0x77) != '\0') {
      *(undefined1 *)(iVar5 + 0x77) = 0;
      if (*(int *)(iVar5 + 0x44) != *(int *)(iVar5 + 0x48)) {
        if (*(char *)(iVar5 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c5cf3b4,0x183,_LAB_2c5cf3c4,_LAB_2c5cf3c0);
        }
        iVar3 = FUN_2c5ce0e8();
        if (iVar3 != 0) {
          if (*(int *)(iVar5 + 0x44) != *(int *)(iVar5 + 0x48)) {
            FUN_2c629df4();
            uVar1 = _LAB_2c5cf3ac;
            FUN_2c66b140();
            uVar2 = FUN_2c66b19c();
            uVar4 = *(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2;
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(4,_LAB_2c5cf3b4,0x2cc,_LAB_2c5cf3b0,uVar1,
                         *(undefined4 *)
                          (*(int *)(iVar5 + 0x44) + (uVar2 - (uVar2 / uVar4) * uVar4) * 4));
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c5cf3b4,0x2c8,_LAB_2c5cf3b0,_LAB_2c5cf3cc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5cf3b4,0x2c4,_LAB_2c5cf3b0,_LAB_2c5cf3c8);
      }
      if (iVar3 != 0) {
        iVar5 = FUN_2c62bdd8(_LAB_2c5cf508,5000,iVar5);
        *(undefined4 *)(iVar5 + 0x10) = 1;
        return;
      }
      if (*(int *)(iVar5 + 0x5c) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ce24c,0x25d,_LAB_2c5ce248,_LAB_2c5ce244,0,unaff_r4);
      }
    }
  }
  return;
}

