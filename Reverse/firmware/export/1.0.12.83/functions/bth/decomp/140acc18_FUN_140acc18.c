/* FUN_140acc18 @ 0x140acc18 */

undefined4 FUN_140acc18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_140acc60;
  *(undefined2 *)(DAT_140acc60 + 4) = *(undefined2 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x10) = 0x400;
  *(undefined4 *)(iVar1 + 0x14) = 0x400;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  FUN_140aa054();
  FUN_1402a6e8(4,0x348,DAT_140acc6c,DAT_140acc68,DAT_140acc64,*(undefined2 *)(param_1 + 4),
               *(undefined4 *)(param_1 + 8));
  return 0;
}

