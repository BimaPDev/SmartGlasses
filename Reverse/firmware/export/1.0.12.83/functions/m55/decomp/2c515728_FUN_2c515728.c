/* FUN_2c515728 @ 0x2c515728 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c515728(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_2c62107c(param_2);
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 4);
  *(undefined1 *)(*(int *)(param_2 + 4) + 9) = 0;
  iVar2 = *(int *)(iVar3 + 0x10);
  *(undefined1 *)(iVar2 + 1) = 0;
  *(undefined1 *)(iVar2 + 4) = 0x23;
  FUN_2c514bec(iVar3);
  iVar2 = *(int *)(iVar3 + 0x14);
  func_0x2c5119b4(iVar2);
  if ((piVar1 != (int *)0x0) && (*piVar1 == *_LAB_2c51577c)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5154cc,0x232,_LAB_2c5154c4,_LAB_2c5154c8,_LAB_2c5154c4);
  }
  if (*(char *)(iVar2 + 4) != '\x01') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c511d88,0xb5,DAT_2c511d80,DAT_2c511d84,DAT_2c511d80);
}

