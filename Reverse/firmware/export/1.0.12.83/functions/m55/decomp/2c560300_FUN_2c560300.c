/* FUN_2c560300 @ 0x2c560300 */

void FUN_2c560300(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar2 != 0) {
    FUN_2c58d410(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_2c603a04(uVar1,0,DAT_2c5603e0);
  FUN_2c6070bc(uVar1,0x21c);
  FUN_2c60710c(uVar1,0x27d1);
  FUN_2c606f34(uVar1,0,0xffffff6c);
  FUN_2c6072b4(uVar1,5);
  FUN_2c606e74(uVar1,0);
  uVar1 = FUN_2c606a10(uVar1);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar2 != 0) {
    FUN_2c58d410(param_1 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  FUN_2c603a04(uVar1,0,DAT_2c5603e0);
  FUN_2c6070bc(uVar1,0x21c);
  FUN_2c60710c(uVar1,0x27d1);
  FUN_2c606fa8(uVar1,0);
  FUN_2c606ff8(uVar1,0);
  FUN_2c6072b4(uVar1,1);
  FUN_2c606abc(uVar1,0x10);
  FUN_2c606d9c(uVar1,1,0);
  FUN_2c606e68(uVar1,0xc,0);
  FUN_2c606d90(uVar1,0x66,0);
  FUN_2c606d84(uVar1,0xff00ff00,0);
  return;
}

