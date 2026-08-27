/* FUN_14048724 @ 0x14048724 */

undefined4
FUN_14048724(undefined2 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_14048774;
  puVar2 = (undefined4 *)FUN_140e5728(*DAT_14048774,0,param_3,param_4,param_4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14048778);
  }
  uVar3 = FUN_140e5998();
  *puVar2 = uVar3;
  puVar2[1] = 7;
  uVar3 = param_2[1];
  *(undefined4 *)((int)puVar2 + 10) = *param_2;
  *(undefined4 *)((int)puVar2 + 0xe) = uVar3;
  *(undefined2 *)(puVar2 + 2) = param_1;
  iVar4 = FUN_140e56b8(*puVar1,puVar2);
  if (iVar4 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1404877c);
}

