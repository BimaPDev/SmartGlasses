/* FUN_14094704 @ 0x14094704 */

undefined4 FUN_14094704(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *DAT_14094784;
  uVar1 = *(undefined1 *)(DAT_14094784 + 1);
  *(undefined2 *)(param_1 + 0x3c2) = 5;
  *(undefined1 *)(param_1 + 0x3ec) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(int *)(param_1 + 0x3c4) = param_1 + 1000;
  *(undefined1 *)(param_1 + 0x3c1) = param_2;
  *(undefined1 *)(param_1 + 0x3e4) = 0xc;
  *(undefined1 *)(param_1 + 0x3c0) = 0x10;
  *(undefined2 *)(param_1 + 0x3ea) = uVar2;
  *(undefined1 *)(param_1 + 1000) = 2;
  *(undefined1 *)(param_1 + 0x3e9) = 1;
  FUN_140755e4();
  iVar3 = FUN_140e5558(param_1 + 4);
  uVar4 = 1;
  if (iVar3 == 0) {
    FUN_140e59c8(param_1 + 4,param_1 + 0x3b8);
    uVar4 = 2;
  }
  FUN_140933d8(param_1);
  FUN_1407561c();
  return uVar4;
}

