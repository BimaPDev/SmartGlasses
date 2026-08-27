/* FUN_14038944 @ 0x14038944 */

void FUN_14038944(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_3 < 0x10) || ((((uint)param_2 ^ (uint)param_1) & 3) != 0)) {
    if (param_3 == 0) {
      return;
    }
    puVar3 = (undefined1 *)((int)param_1 + -1);
    puVar2 = param_2;
    do {
      puVar1 = (undefined4 *)((int)puVar2 + 1);
      puVar3 = puVar3 + 1;
      *puVar3 = *(undefined1 *)puVar2;
      puVar2 = puVar1;
    } while (puVar1 != (undefined4 *)((int)param_2 + param_3));
    return;
  }
  puVar2 = param_2;
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_1403898c:
    puVar1 = param_2 + 4;
    puVar2 = param_1;
    do {
      puVar5 = puVar1 + 4;
      *puVar2 = puVar1[-4];
      puVar2[1] = puVar1[-3];
      puVar2[2] = puVar1[-2];
      puVar2[3] = puVar1[-1];
      puVar1 = puVar5;
      puVar2 = puVar2 + 4;
    } while (puVar5 != (undefined4 *)((int)param_2 + (param_3 - 0x10 & 0xfffffff0) + 0x20));
    iVar4 = (param_3 - 0x10 >> 4) + 1;
    param_3 = param_3 & 0xf;
    param_1 = param_1 + iVar4 * 4;
    param_2 = param_2 + iVar4 * 4;
LAB_140389e0:
    if (3 < param_3) {
      puVar2 = param_1 + -1;
      puVar1 = param_2;
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
      } while (puVar2 != (undefined4 *)((param_3 - 4 & 0xfffffffc) + (int)param_1));
      iVar4 = (param_3 - 4 >> 2) + 1;
      param_3 = param_3 & 3;
      param_1 = param_1 + iVar4;
      param_2 = param_2 + iVar4;
    }
    if (param_3 != 0) {
      puVar3 = (undefined1 *)((int)param_1 + -1);
      puVar2 = param_2;
      do {
        puVar1 = (undefined4 *)((int)puVar2 + 1);
        puVar3 = puVar3 + 1;
        *puVar3 = *(undefined1 *)puVar2;
        puVar2 = puVar1;
      } while (puVar1 != (undefined4 *)((int)param_2 + param_3));
    }
  }
  else {
    do {
      param_2 = (undefined4 *)((int)puVar2 + 1);
      param_3 = param_3 - 1;
      param_1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      if (((uint)param_1 & 3) == 0) {
        if (param_3 < 0x10) goto LAB_140389e0;
        goto LAB_1403898c;
      }
      puVar2 = param_2;
      puVar1 = param_1;
    } while (param_3 != 0);
  }
  return;
}

