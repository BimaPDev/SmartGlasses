/* FUN_1013d1aa @ 0x1013d1aa */

int FUN_1013d1aa(undefined1 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_3;
  uStack_1c = param_2;
  bVar8 = param_2 < 0;
  if (bVar8) {
    param_2 = -param_2;
  }
  *param_1 = (char)param_3;
  if (bVar8) {
    uVar3 = 0x2d;
  }
  else {
    uVar3 = 0x2b;
  }
  param_1[1] = uVar3;
  if (param_2 < 10) {
    param_1[2] = 0x30;
    puVar7 = param_1 + 4;
    param_1[3] = (char)param_2 + '0';
  }
  else {
    puVar5 = (undefined1 *)((int)&uStack_1c + 3);
    puVar7 = puVar5;
    do {
      puVar6 = puVar7;
      cVar1 = (char)(param_2 / 10);
      puVar6[-1] = (char)param_2 + cVar1 * -10 + '0';
      bVar8 = 99 < param_2;
      param_2 = param_2 / 10;
      puVar7 = puVar6 + -1;
    } while (bVar8);
    puVar6[-2] = cVar1 + '0';
    puVar7 = param_1 + 1;
    for (puVar2 = puVar6 + -2; puVar2 < puVar5; puVar2 = puVar2 + 1) {
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2;
    }
    iVar4 = (int)&uStack_18 + (1 - (int)puVar6);
    if (puVar5 < puVar6 + -2) {
      iVar4 = 0;
    }
    puVar7 = param_1 + iVar4 + 2;
  }
  return (int)puVar7 - (int)param_1;
}

