/* FUN_14066334 @ 0x14066334 */

void FUN_14066334(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_14066108(param_2);
  puVar2 = (undefined2 *)FUN_14074378(0xb01,*(undefined2 *)(iVar1 + 4),2,0x18);
  if (puVar2 == (undefined2 *)0x0) {
    return;
  }
  puVar2[1] = param_3;
  puVar2[2] = (short)param_4;
  *(char *)(puVar2 + 3) = (char)param_2;
  *puVar2 = 0x103;
  if (param_4 != 0) {
    FUN_140743d0();
    return;
  }
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)((int)puVar2 + 7) = *param_5;
  *(undefined4 *)((int)puVar2 + 0xb) = uVar3;
  *(undefined4 *)((int)puVar2 + 0xf) = uVar4;
  *(undefined4 *)((int)puVar2 + 0x13) = uVar5;
  FUN_140743d0();
  return;
}

