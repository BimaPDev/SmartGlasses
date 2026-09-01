/* FUN_100706a4 @ 0x100706a4 */

undefined4 FUN_100706a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  FUN_1011ea48(iVar2,0,0x90,param_4,param_4);
  puVar1 = DAT_100706e4;
  *DAT_100706e4 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  FUN_1013ca1a(iVar2 + 0x34,0,1);
  FUN_1013c856(iVar2 + 0x4c);
  FUN_101146e4(iVar2 + 0x60,DAT_100706e8);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  FUN_1005f638();
  return 0;
}

