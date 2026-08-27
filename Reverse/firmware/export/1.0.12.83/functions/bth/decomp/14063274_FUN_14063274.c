/* FUN_14063274 @ 0x14063274 */

undefined4
FUN_14063274(int param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,undefined1 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_1405c2b0(*(undefined1 *)(param_1 + 0x17));
  if (iVar1 == 0xffff) {
    return 0x43;
  }
  puVar2 = (undefined2 *)FUN_1406db30(0x205c,10);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = (short)iVar1;
    *(undefined1 *)(puVar2 + 1) = param_2;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    *(undefined1 *)(puVar2 + 4) = param_5;
    FUN_1406da30(puVar2,1,param_6);
    FUN_140547f4(*(undefined1 *)(param_1 + 0x17),*(undefined1 *)(param_1 + 0xc));
    return 0;
  }
  return 0x4b;
}

