/* FUN_100efd4c @ 0x100efd4c */

undefined4 FUN_100efd4c(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_100efd90;
  FUN_1011ea48(DAT_100efd90 + 1,0,0x10);
  *(undefined1 *)(puVar1 + 1) = param_2;
  *(undefined1 *)((int)puVar1 + 5) = 1;
  *puVar1 = param_1;
  *(undefined2 *)((int)puVar1 + 6) = 0;
  uVar3 = puVar1[2];
  puVar1[2] = 0;
  uVar2 = DAT_100efd94;
  puVar1[3] = puVar1 + 3;
  puVar1[4] = puVar1 + 3;
  FUN_10138c00(0,uVar2,uVar3);
  return 0;
}

