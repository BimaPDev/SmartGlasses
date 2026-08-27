/* FUN_140378e4 @ 0x140378e4 */

void FUN_140378e4(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_30;
  int local_2c;
  
  iVar10 = 0;
  local_2c = *DAT_14037a8c;
  local_30 = 0;
  iVar5 = FUN_140e5848();
  iVar6 = FUN_140391d0(0x600);
  piVar3 = DAT_14037ab8;
  piVar2 = DAT_14037ab4;
  *DAT_14037ab4 = iVar6;
  iVar6 = FUN_140391d0(0x600);
  *piVar3 = iVar6;
  iVar6 = FUN_140391d0(0x600);
  piVar4 = DAT_14037abc;
  iVar11 = 1;
  *DAT_14037abc = iVar6;
  puVar7 = (undefined4 *)FUN_14037868(0x1000);
  iVar6 = DAT_14037ac0;
  piVar1 = DAT_14037a90;
  do {
    *(undefined4 *)(iVar6 + 0xc00) = 0;
    FUN_140e5908(200);
    if (iVar10 == 0) {
      *(undefined4 *)(iVar6 + 0xc00) = DAT_14037aac;
    }
    else {
      uVar8 = DAT_14037a94;
      if (iVar10 != 1) {
        uVar8 = DAT_14037a98;
      }
      *(undefined4 *)(iVar6 + 0xc00) = uVar8;
    }
    FUN_140e5908(200);
    FUN_14036ff8(*puVar7,0x800);
    do {
    } while (*piVar1 != 0);
    FUN_140391f0(*puVar7,0x1000,puVar7[1],puVar7[2]);
    if (iVar10 == 0) {
      FUN_14039264(puVar7[1],puVar7[2],0x800,*piVar2,*piVar3,*piVar4,&local_30);
LAB_14037a56:
      if (local_30 != 1) {
LAB_140379bc:
        FUN_1402a6e8(4,0x4b5,DAT_14037aa4,DAT_14037aa8,DAT_14037aa0,DAT_14037a9c);
        goto LAB_140379d2;
      }
    }
    else {
      iVar9 = *piVar4;
      if (iVar10 == 1) {
        FUN_14039264(puVar7[1],puVar7[2],0x800,*piVar2 + 0x200,*piVar3 + 0x200,iVar9 + 0x200,
                     &local_30);
        goto LAB_14037a56;
      }
      FUN_14039264(puVar7[1],puVar7[2],0x800,*piVar2 + 0x400,*piVar3 + 0x400,iVar9 + 0x400,&local_30
                  );
      if (local_30 != 1) goto LAB_140379bc;
LAB_140379d2:
      if (iVar11 == 3) {
        iVar6 = FUN_140e5848();
        uVar8 = FUN_140e5548(iVar6 - iVar5);
        FUN_1402a6e8(4,0x4b9,DAT_14037aa4,DAT_14037aa8,DAT_14037ab0,DAT_14037a9c,uVar8);
        FUN_140391e0(*puVar7);
        FUN_140391e0(puVar7[1]);
        FUN_140391e0(puVar7[2]);
        FUN_140391e0(puVar7);
        if (*DAT_14037a8c == local_2c) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 1;
  } while( true );
}

