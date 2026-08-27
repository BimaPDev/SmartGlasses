/* FUN_14064e20 @ 0x14064e20 */

void FUN_14064e20(undefined1 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,int param_6)

{
  int iVar1;
  undefined2 *puVar2;
  short sVar3;
  short sVar4;
  
  iVar1 = FUN_14066108(param_2);
  if (iVar1 != 0) {
    if (param_6 == 0) {
      sVar3 = 0xe;
      sVar4 = 0;
    }
    else {
      sVar4 = *(short *)(param_6 + 4);
      sVar3 = sVar4 + 0xe;
    }
    puVar2 = (undefined2 *)FUN_14074378(0xb02,*(undefined2 *)(iVar1 + 4),2,sVar3);
    if (puVar2 != (undefined2 *)0x0) {
      puVar2[1] = param_3;
      *(char *)(puVar2 + 2) = (char)param_2;
      *(undefined1 *)((int)puVar2 + 5) = param_1;
      puVar2[3] = param_4;
      puVar2[4] = param_5;
      puVar2[5] = sVar4;
      *puVar2 = 0x305;
      FUN_14073968(param_6,puVar2 + 6,sVar4);
      FUN_140743d0(puVar2);
    }
  }
  FUN_140735a8(param_6);
  return;
}

