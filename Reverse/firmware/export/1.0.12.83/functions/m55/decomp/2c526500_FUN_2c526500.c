/* FUN_2c526500 @ 0x2c526500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c526500(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char acStack_8c [45];
  char cStack_5f;
  char cStack_37;
  undefined4 uStack_1c;
  
  puVar2 = *(undefined4 **)(param_1 + 0x54);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_2c478b68();
    *(undefined4 **)(param_1 + 0x54) = puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_2c526542;
  }
  (*(code *)*puVar2)(PTR_LAB_2c535df4_1_2c526580);
  (**(code **)(*(int *)(param_1 + 0x54) + 0xc4))(PTR_LAB_2c535dbc_1_2c526584);
  (**(code **)(*(int *)(param_1 + 0x54) + 0xb4))(PTR_LAB_2c535d84_1_2c526588);
  (**(code **)(*(int *)(param_1 + 0x54) + 200))(PTR_LAB_2c535d4a_3_2c52658c);
  (**(code **)(*(int *)(param_1 + 0x54) + 0x5c))(PTR_LAB_2c535d14_1_2c526590);
  (**(code **)(*(int *)(param_1 + 0x54) + 0x118))(PTR_LAB_2c535e2c_1_2c526594);
LAB_2c526542:
  iVar1 = FUN_2c471604(1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(iVar1 + 0x3d);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5265a0,0xe2,_LAB_2c52659c);
  }
  uStack_1c = *DAT_2c526484;
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x10a,DAT_2c5264a4,DAT_2c5264e0);
  }
  (**(code **)(*(int *)(param_1 + 0x54) + 0xbc))(acStack_8c);
  if (acStack_8c[0] == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x10f,DAT_2c5264a4,DAT_2c5264b4);
  }
  if (cStack_5f == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x113,DAT_2c5264a4,DAT_2c5264b8);
  }
  if (cStack_37 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x117,DAT_2c5264a4,DAT_2c5264ac);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c526490,0x1f1,DAT_2c52648c,DAT_2c526488);
}

