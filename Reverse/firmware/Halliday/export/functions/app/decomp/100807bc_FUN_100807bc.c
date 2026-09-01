/* FUN_100807bc @ 0x100807bc */

undefined4 FUN_100807bc(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char local_38 [20];
  
  iVar7 = 0;
  iVar8 = param_1[3];
  uVar5 = 0;
  FUN_10121e54();
  do {
    if (*(ushort *)(iVar8 + 0x10d8) <= uVar5) {
      if ((3 < *(byte *)(*param_1 + 0x10)) &&
         (pcVar4 = *(code **)(*param_1 + 0xc), pcVar4 != (code *)0x0)) {
        (*pcVar4)(PTR_s_Debug___s__d_Erase__d_blocks__sk_100808a8,PTR_s_nand_phy_erase_all_100808a4,
                  0xaf2,(uint)*(byte *)(iVar8 + 0x10d4) * (uint)*(ushort *)(iVar8 + 0x10d8),iVar7);
      }
      return 1;
    }
    for (uVar6 = 0; uVar6 < *(byte *)(iVar8 + 0x10d4); uVar6 = uVar6 + 1) {
      if (param_2 == 0) {
        piVar9 = (int *)param_1[3];
        uVar1 = FUN_1011ea48(local_38,0xff,0x10);
        uVar2 = (uint)*(byte *)(*piVar9 + 10) * (uint)*(byte *)(*piVar9 + 0xb);
        if (uVar2 == 0x20) {
          iVar3 = -1;
        }
        else {
          iVar3 = (1 << (uVar2 & 0xff)) + -1;
        }
        FUN_10121e98(param_1,uVar6,uVar5,0,iVar3,0,uVar1);
        if (local_38[0] == -1) goto LAB_10080894;
        if ((1 < *(byte *)(*param_1 + 0x10)) &&
           (pcVar4 = *(code **)(*param_1 + 0xc), pcVar4 != (code *)0x0)) {
          (*pcVar4)(PTR_s_Warn____s__d_Found_bad_block__u___100808b0,PTR_s_TestSuBlkIsBad_100808ac,
                    0xa77,uVar5,uVar6);
        }
        iVar7 = iVar7 + 1;
      }
      else {
LAB_10080894:
        FUN_10121fb8(param_1,uVar6,uVar5);
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

