/* FUN_1013039c @ 0x1013039c */

undefined4 FUN_1013039c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_18;
  
  puVar6 = &local_28;
  FUN_1011ea48(&local_28,0,0x10);
  iVar2 = *param_2;
  for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
    cVar1 = *(char *)(param_2[1] + iVar5);
    puVar7 = (undefined4 *)(param_1 + 0xa8);
    if ((((cVar1 == '\v') || (puVar7 = (undefined4 *)(param_1 + 0xac), cVar1 == '\r')) ||
        (puVar7 = (undefined4 *)(param_1 + 0xa4), cVar1 == '\n')) && (puVar7 != (undefined4 *)0x0))
    {
      uVar8 = 0;
      if (param_2[2] != 0) {
        uVar8 = *(undefined4 *)(param_2[2] + iVar5 * 4);
      }
      *puVar7 = uVar8;
    }
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    local_28 = FUN_101301d8();
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_24 = FUN_101301d8();
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    local_20 = FUN_101301d8();
  }
  uVar8 = *(undefined4 *)(param_1 + 0x48);
  iVar2 = FUN_100b0db8(0x123,0,0x14);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = 2;
    puVar7 = (undefined4 *)(iVar2 + 0x10);
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      puVar6 = puVar6 + 2;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      puVar7 = puVar7 + 2;
    } while (puVar6 != &uStack_18);
    FUN_10064d1c(uVar8,iVar2);
    FUN_1012d1f4(iVar2);
  }
  return 0;
}

