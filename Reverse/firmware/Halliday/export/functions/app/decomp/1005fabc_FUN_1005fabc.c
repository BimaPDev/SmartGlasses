/* FUN_1005fabc @ 0x1005fabc */

undefined4 FUN_1005fabc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_1011ea48(iVar1,0,0x70);
  *(undefined1 *)(iVar1 + 1) = 0xff;
  FUN_1013ca1a(iVar1 + 0x54,0,1);
  FUN_1013ca1a(iVar1 + 0x18,0,1);
  FUN_1013ca1a(iVar1 + 0x3c,0,1);
  *(uint *)(DAT_1005fb10 + 4) = *(uint *)(DAT_1005fb10 + 4) | 2;
  FUN_1006815c(0x27,0);
  FUN_10068114(0x27);
  return 0;
}

