/* FUN_1403e660 @ 0x1403e660 */

void FUN_1403e660(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)FUN_14074378(0xb00,2,0,8,param_4);
  iVar2 = DAT_1403e694;
  puVar3[2] = 0x17;
  uVar1 = *(undefined1 *)(iVar2 + 2);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 3) = uVar1;
  puVar3[1] = param_1;
  *(char *)((int)puVar3 + 7) = (char)param_1;
  FUN_140743d0();
  *(undefined4 *)(iVar2 + 4) = 0x170017;
  return;
}

