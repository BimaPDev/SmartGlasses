/* FUN_2c5b36e8 @ 0x2c5b36e8 */

void FUN_2c5b36e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 8) == 0)) {
    uVar1 = FUN_2c606a10(param_2);
    FUN_2c606abc(uVar1,0x10);
    FUN_2c606abc(uVar1,2);
    FUN_2c606d60(uVar1,0xff000000,0);
    FUN_2c606d6c(uVar1,0,0);
    FUN_2c606d9c(uVar1,0,0);
    FUN_2c606d30(uVar1,0,0);
    FUN_2c606d3c(uVar1,0,0);
    FUN_2c606d18(uVar1,0,0);
    FUN_2c606d24(uVar1,0,0);
    FUN_2c606e68(uVar1,0,0);
    FUN_2c62a470();
    uVar2 = FUN_2c62a47c();
    FUN_2c62a470();
    uVar3 = FUN_2c62a4a0();
    FUN_2c607048(uVar1,uVar2,uVar3);
    *(undefined4 *)(param_1 + 8) = uVar1;
    FUN_2c5b35b4(param_1,uVar1,param_4);
    FUN_2c5b364c(param_1,uVar1,param_4,param_3);
    FUN_2c5b6ba0(*(undefined4 *)(param_1 + 0x28),uVar1,param_4);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 4);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b37d0,0x9a,DAT_2c5b37cc,DAT_2c5b37c8);
}

