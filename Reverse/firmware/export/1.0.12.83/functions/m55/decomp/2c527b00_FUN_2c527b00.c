/* FUN_2c527b00 @ 0x2c527b00 */

void FUN_2c527b00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_2c606a10(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_2c5273c0(param_1);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x48),0x118);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = FUN_2c5e2e8c(DAT_2c527eb8);
  FUN_2c606d78(uVar4,uVar1,0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x48),2,0,4);
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  FUN_2c6072bc(uVar1,0,0x78,0x5a);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = FUN_2c5e2e8c(DAT_2c527ebc);
  FUN_2c63140c(uVar4,uVar1);
  uVar1 = FUN_2c527a68(param_1);
  uVar1 = FUN_2c5dc51c(uVar1,1);
  uVar4 = FUN_2c66c4ec();
  uVar2 = FUN_2c5e2e80(DAT_2c527ec0);
  iVar3 = FUN_2c62b85c(uVar1,uVar4,uVar2,0,0);
  uVar4 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x48));
  FUN_2c5273c0(param_1,uVar4);
  FUN_2c6072bc(uVar4,2,0,0x82);
  if (0xae < iVar3) {
    iVar3 = 0xaf;
  }
  FUN_2c607048(uVar4,(int)(short)iVar3,0x18);
  uVar4 = FUN_2c637344(uVar4);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  uVar2 = FUN_2c5e2e80(DAT_2c527ec0);
  FUN_2c606e38(uVar4,uVar2,0);
  FUN_2c606e20(uVar4,0xff00ff00,0);
  FUN_2c606e2c(uVar4,0xff,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x50),0x27d1);
  FUN_2c6388cc(*(undefined4 *)(param_1 + 0x50),1);
  FUN_2c638814(*(undefined4 *)(param_1 + 0x50),DAT_2c527ec4,uVar1);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x50),2,0);
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(4,uVar1);
}

