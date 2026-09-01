/* FUN_1011c2fe @ 0x1011c2fe */

void FUN_1011c2fe(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar3 = 10;
    iVar4 = 2;
    while( true ) {
      uVar1 = FUN_1011c482(4);
      if (((~uVar1 & 0xb05) == 0) || (iVar3 = iVar3 + -1, iVar3 == 0)) break;
      thunk_FUN_1011598c(iVar4);
      iVar4 = iVar4 << 1;
    }
    uVar1 = FUN_1011c482(0);
    FUN_1011c48e(0,uVar1 & 0xffff0000 | uVar1 & 0xfc03 | 0x204);
    uVar1 = uVar1 & 0xffff0000 | uVar1 & 0xfc03 | 4;
    thunk_FUN_1011598c(1);
    FUN_1011c48e(0,uVar1);
    thunk_FUN_1011598c(5);
    uVar2 = 0;
    uVar1 = uVar1 | 2;
  }
  else {
    uVar1 = FUN_1011c482(0);
    FUN_1011c48e(0,uVar1 & 0xfffffffd);
    thunk_FUN_1011598c(1);
    FUN_1011c48e(0,uVar1 & 0xffff0000 | uVar1 & 0xfc01 | 0x300);
    thunk_FUN_1011598c(1);
    FUN_1011c48e(0,uVar1 & 0xffff0000 | uVar1 & 0xfc01 | 0x100);
    thunk_FUN_1011598c(5);
    uVar1 = FUN_1011c482(0);
    FUN_1011c48e(0,uVar1 | 0x80000);
    FUN_1011c48e(0,uVar1 | 0x81000);
    thunk_FUN_1011598c(5);
    FUN_1011c48e(0,(uVar1 | 0x81000) & 0xffffefff);
    FUN_1011c48e(0,uVar1 & 0xfff7efff);
    iVar3 = 2;
    do {
      thunk_FUN_1011598c(iVar3);
      uVar1 = FUN_1011c482(4);
      iVar3 = iVar3 << 1;
    } while ((~uVar1 & 0xb05) != 0);
    uVar1 = FUN_1011c482(0x100);
    FUN_1011c48e(0x100,uVar1 | 1);
    thunk_FUN_1011598c(1);
    uVar1 = FUN_1011c482(0x104);
    FUN_1011c48e(0x104,uVar1 | 0x800);
    thunk_FUN_1011598c(1);
    uVar1 = FUN_1011c482(0x104);
    uVar1 = uVar1 | 0x100;
    uVar2 = 0x104;
  }
  FUN_1011c48e(uVar2,uVar1);
  thunk_FUN_1011598c(1);
  return;
}

