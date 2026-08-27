/* FUN_14003d54 @ 0x14003d54 */

undefined1 * FUN_14003d54(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = 0;
    if (*(int *)(DAT_14003de4 + 0x94) != 0) goto LAB_14003d9c;
LAB_14003db6:
    uVar5 = uVar2;
    puVar3 = (undefined1 *)FUN_14004518(*(undefined4 *)(DAT_14003de4 + 0x80),0x1c,1);
  }
  else {
    uVar1 = *param_1;
    uVar5 = (undefined1)param_1[1];
    puVar3 = (undefined1 *)param_1[2];
    if (puVar3 != (undefined1 *)0x0) {
      if ((((uint)puVar3 & 3) != 0) || (uVar2 = 0, (uint)param_1[3] < 0x1c)) {
LAB_14003dc6:
        FUN_14003c70(0,0xfffffff7);
        return (undefined1 *)0x0;
      }
      goto LAB_14003d6e;
    }
    if (param_1[3] != 0) goto LAB_14003dc6;
    uVar4 = uVar1;
    uVar2 = uVar5;
    if (*(int *)(DAT_14003de4 + 0x94) == 0) goto LAB_14003db6;
LAB_14003d9c:
    puVar3 = (undefined1 *)FUN_140072ec();
    uVar1 = uVar4;
  }
  if (puVar3 == (undefined1 *)0x0) {
    FUN_14003c70(0,0xfffffffb);
    return (undefined1 *)0x0;
  }
  uVar2 = 1;
LAB_14003d6e:
  puVar3[2] = uVar2;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  puVar3[3] = uVar5;
  *(undefined4 *)(puVar3 + 4) = uVar1;
  *puVar3 = 0xf5;
  puVar3[0x18] = 0;
  FUN_14003c78(puVar3);
  return puVar3;
}

