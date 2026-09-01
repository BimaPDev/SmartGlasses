/* FUN_100a3e34 @ 0x100a3e34 */

undefined4 FUN_100a3e34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = DAT_100a3f14;
  iVar2 = DAT_100a3f10;
  *DAT_100a3f14 = DAT_100a3f10;
  iVar2 = FUN_1011ea48(iVar2,0,0xd8,iVar2,param_4);
  uVar3 = DAT_100a3f18;
  *(undefined4 *)(iVar2 + 0x90) = param_1;
  thunk_FUN_101146e4(iVar2,uVar3);
  thunk_FUN_101146e4(*piVar1 + 0x30,DAT_100a3f1c);
  thunk_FUN_101146e4(*piVar1 + 0x60,DAT_100a3f20);
  iVar4 = *piVar1;
  uVar3 = FUN_100647ac(DAT_100a3f28,DAT_100a3f24);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  if (*(int *)(iVar2 + 0xbc) == 0) {
    FUN_100a5b78(DAT_100a3f34 | (DAT_100a3f30 - DAT_100a3f2c) * 0x20 & 0xff00U,DAT_100a3f3c,
                 DAT_100a3f38);
  }
  iVar4 = *piVar1;
  uVar3 = FUN_100647ac(DAT_100a3f28,DAT_100a3f40);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar4 + 0xb8) = uVar3;
  if (*(int *)(iVar2 + 0xb8) == 0) {
    FUN_100a5b78((DAT_100a3f30 - DAT_100a3f2c) * 0x20 & 0xff00U | 0x1860021,DAT_100a3f3c,
                 DAT_100a3f44);
  }
  iVar4 = *piVar1;
  uVar3 = FUN_100647ac(DAT_100a3f28,DAT_100a3f48);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar4 + 0xc0) = uVar3;
  if (*(int *)(iVar2 + 0xc0) == 0) {
    FUN_100a5b78(DAT_100a3f4c | (DAT_100a3f30 - DAT_100a3f2c) * 0x20 & 0xff00U,DAT_100a3f3c,
                 DAT_100a3f50);
  }
  uVar3 = DAT_100a3f58;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0xc4) = DAT_100a3f54;
  *(undefined4 *)(iVar2 + 200) = uVar3;
  *(undefined4 *)(iVar2 + 0xcc) = DAT_100a3f5c;
  *(undefined2 *)(iVar2 + 0xd0) = 200;
  return 0;
}

