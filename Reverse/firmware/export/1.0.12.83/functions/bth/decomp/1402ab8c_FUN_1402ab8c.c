/* FUN_1402ab8c @ 0x1402ab8c */

void FUN_1402ab8c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  if (*DAT_1402acb0 != '\0') {
    FUN_14029cb0(DAT_1402acb4,1);
  }
  puVar13 = DAT_1402acb8;
  if (*(char *)(DAT_1402acb8 + 10) != '\0') {
    iVar9 = 0;
    puVar11 = DAT_1402acb8;
    do {
      (*(code *)*puVar11)(3,0);
      iVar9 = iVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar9 < (int)(uint)*(byte *)(puVar13 + 10));
  }
  uVar1 = DAT_1402acc4;
  uVar3 = DAT_1402acbc;
  iVar9 = 0;
  puVar11 = param_1;
  do {
    uVar5 = puVar11[3];
    iVar7 = iVar9 + 3;
    uVar6 = puVar11[2];
    iVar8 = iVar9 + 2;
    uVar4 = puVar11[1];
    uVar2 = FUN_1402a350(uVar3,100,uVar1,iVar9,*puVar11,iVar9 + 1,uVar4,iVar8,uVar6,iVar7,uVar5);
    if (*DAT_1402acb0 != '\0') {
      FUN_14029cb0(uVar3,uVar2);
    }
    if (*(char *)(puVar13 + 10) != '\0') {
      iVar10 = 0;
      puVar12 = DAT_1402acb8;
      do {
        (*(code *)*puVar12)(4,uVar3,uVar2);
        iVar10 = iVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar10 < (int)(uint)*(byte *)(puVar13 + 10));
    }
    iVar9 = iVar9 + 4;
    puVar11 = puVar11 + 4;
  } while (iVar9 != 0xc);
  uVar3 = FUN_1402a350(DAT_1402acbc,100,DAT_1402acc0,param_1[0xc],param_1[0xd],param_1[0xe],uVar4,
                       iVar8,uVar6,iVar7,uVar5);
  if (*DAT_1402acb0 != '\0') {
    FUN_14029cb0(DAT_1402acbc,uVar3);
  }
  uVar1 = DAT_1402acbc;
  puVar11 = DAT_1402acb8;
  if (*(char *)(puVar13 + 10) != '\0') {
    iVar9 = 0;
    puVar13 = DAT_1402acb8;
    do {
      (*(code *)*puVar13)(4,uVar1,uVar3);
      iVar9 = iVar9 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar9 < (int)(uint)*(byte *)(puVar11 + 10));
    if (*(byte *)(puVar11 + 10) != 0) {
      iVar9 = 0;
      puVar13 = puVar11;
      do {
        (*(code *)*puVar13)(5,0);
        iVar9 = iVar9 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar9 < (int)(uint)*(byte *)(puVar11 + 10));
    }
  }
  return;
}

