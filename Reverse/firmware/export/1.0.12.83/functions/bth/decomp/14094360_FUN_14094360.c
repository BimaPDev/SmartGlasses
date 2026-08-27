/* FUN_14094360 @ 0x14094360 */

undefined4 FUN_14094360(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  pcVar2 = (code *)*DAT_140943f8;
  puVar3 = (undefined1 *)(param_1 + 0x430);
  *(undefined1 **)(param_1 + 0x40c) = puVar3;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(0xd);
    if (iVar1 != 0) {
      return 2;
    }
    puVar3 = *(undefined1 **)(param_1 + 0x40c);
  }
  uVar4 = 1;
  *(undefined1 *)(param_1 + 0x408) = 0x31;
  *puVar3 = 0xd;
  *(char *)(*(int *)(param_1 + 0x40c) + 1) = (char)((uint)param_2 >> 0x18);
  *(char *)(*(int *)(param_1 + 0x40c) + 2) = (char)((uint)param_2 >> 0x10);
  *(char *)(*(int *)(param_1 + 0x40c) + 3) = (char)((uint)param_2 >> 8);
  *(char *)(*(int *)(param_1 + 0x40c) + 4) = (char)param_2;
  *(undefined2 *)(param_1 + 0x40a) = 5;
  *(undefined4 *)(param_1 + 0x428) = 1;
  FUN_140755e4();
  iVar1 = FUN_140e5558(param_1 + 4,param_1 + 0x400);
  if (iVar1 == 0) {
    FUN_140e59c8(param_1 + 4,param_1 + 0x400);
    uVar4 = 2;
  }
  FUN_140933d8(param_1);
  FUN_1407561c();
  return uVar4;
}

