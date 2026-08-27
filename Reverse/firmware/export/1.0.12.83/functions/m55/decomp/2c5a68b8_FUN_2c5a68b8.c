/* FUN_2c5a68b8 @ 0x2c5a68b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a68b8(undefined4 *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  puVar2 = _LAB_2c5a6a18;
  pcVar5 = (char *)param_1[1];
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc3,_LAB_2c5a6a24,_LAB_2c5a6a2c,_LAB_2c5a6a38,_LAB_2c5a6a20,pcVar5);
  }
  pcVar5 = (char *)*param_1;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xcc,_LAB_2c5a6a24,_LAB_2c5a6a2c,_LAB_2c5a6a28,_LAB_2c5a6a20,pcVar5);
  }
  uVar6 = param_1[4];
  *_LAB_2c5a6a18 = uVar6;
  if (uVar6 != 0) {
LAB_2c5a68da:
    if (((((char *)param_1[1] != (char *)0x0) && (*(char *)param_1[1] != '\0')) &&
        ((char *)*param_1 != (char *)0x0)) && (*(char *)*param_1 != '\0')) {
      *puVar2 = param_1[4];
      FUN_2c5a2398();
      iVar4 = func_0x2c5a2410();
      if (*(int *)(iVar4 + 0x18) != 0) {
        *(uint *)(*(int *)(iVar4 + 0x18) + 8) =
             (uint)((ulonglong)_LAB_2c5a6a40 * (ulonglong)*puVar2 >> 0x26);
        FUN_2c5dc53c(0xb,0x1774,0,0,DAT_2c5a72cc,*(int *)(iVar4 + 0x18) + 8);
        FUN_2c5dc5e0();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5a361c,0x121,_LAB_2c5a3618,_LAB_2c5a3614);
    }
    FUN_2c5a2398();
    iVar4 = FUN_2c5a24b8();
    if (iVar4 == 0) {
      FUN_2c5a2398();
      iVar4 = FUN_2c5a2584();
      if (iVar4 == 0) {
        FUN_2c5a2398();
        func_0x2c5a2410();
        FUN_2c5a2398();
        uVar1 = _LAB_2c5a3bb8;
        uVar3 = FUN_2c5a2974();
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1be,_LAB_2c5a3bc4,_LAB_2c5a3bc0,uVar1,_LAB_2c5a3bbc,uVar3);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a6a24,0xe0,_LAB_2c5a6a20,_LAB_2c5a6a1c);
  }
  FUN_2c5a2398();
  iVar4 = FUN_2c5a24b8();
  if (iVar4 == 0) {
    FUN_2c5a2398();
    iVar4 = FUN_2c5a2584();
    if (iVar4 == 0) {
      FUN_2c5a2398();
      func_0x2c5a2410();
      FUN_2c5a3a34();
      goto LAB_2c5a68da;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5a6a24,0xd8,_LAB_2c5a6a20,_LAB_2c5a6a34);
}

