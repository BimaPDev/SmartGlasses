/* FUN_10067560 @ 0x10067560 */

undefined4 FUN_10067560(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar8 = (uint)*(byte *)((int)param_1 + 0x27e);
  piVar7 = param_1 + uVar8 * 0x31 + 0xd;
  if ((param_2 == 0) || (-1 < (int)((uint)*(ushort *)(param_1 + uVar8 * 0x31 + 0xc) << 0x1f))) {
    *(undefined1 *)(param_1 + 0xa0) = 1;
    if ((int)((uint)*(ushort *)(param_1 + uVar8 * 0x31 + 0xc) << 0x1f) < 0) {
      *(char *)((int)param_1 + 0x285) = (char)param_1[0xa1];
      iVar3 = FUN_10061948();
      param_1[0xa2] = iVar3;
    }
    if ((int)((uint)*(ushort *)(param_1 + uVar8 * 0x31 + 0xc) << 0x18) < 0) {
      iVar3 = (**(code **)(*(int *)(param_1[9] + 8) + 0x24))
                        (param_1[9],param_1[10],0,piVar7,
                         *(undefined1 *)((int)param_1 + uVar8 * 0xc4 + 0x32));
    }
    else {
      iVar3 = (**(code **)(*(int *)(*param_1 + 8) + 8))
                        (*param_1,(short)piVar7[2],*(undefined2 *)((int)piVar7 + 10),
                         param_1[uVar8 * 0x31 + 0xd],
                         *(undefined4 *)(param_1[uVar8 * 0x31 + 0xd] + 0x18));
    }
    if (iVar3 < 0) {
      param_1 = param_1 + uVar8 * 0x31;
      uVar8 = ((int)PTR_DAT_100676c0 - (int)PTR_DAT_100676bc) * 0x20 & 0xff00;
      FUN_100a5b78(uVar8 | 0x2780011,PTR_s__composer_post_top_entry_100676c8,
                   PTR_s_post_failed_100676c4);
      puVar2 = PTR_LAB_1015b3a4_1_100676e4;
      puVar1 = PTR_DAT_100676e0;
      if (param_1[0x13] == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = 2;
      }
      uVar9 = 0;
      do {
        puVar6 = puVar1;
        if (uVar9 != (uVar11 != 1)) {
          puVar6 = puVar2;
        }
        uVar10 = uVar9 + 1;
        FUN_100a5b78(uVar8 | 0x2b0003f,PTR_s__composer_dump_entry_100676d0,
                     PTR_s_L__d__ptr_0x_08x_fmt_0x_02x_stri_100676cc,uVar9,param_1[0x25],
                     param_1[0x20],param_1[0x21],piVar7[1],(char)piVar7[4],(int)(short)piVar7[2],
                     (int)*(short *)((int)piVar7 + 10),(int)(short)piVar7[3],
                     (int)*(short *)((int)piVar7 + 0xe),puVar6);
        param_1 = param_1 + 7;
        piVar7 = piVar7 + 6;
        uVar9 = uVar10;
      } while ((uVar10 & 0xff) < uVar11);
                    /* WARNING: Subroutine does not return */
      FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_framework_dis_100676dc,0x27a,
                   PTR_s__composer_post_top_entry_100676d8,PTR_DAT_100676d4);
    }
    uVar4 = 0;
    bVar5 = *(char *)((int)param_1 + 0x27e) + 1;
    if (bVar5 < 3) {
      *(byte *)((int)param_1 + 0x27e) = bVar5;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x27e) = 0;
    }
  }
  else {
    uVar4 = 0xffffffea;
  }
  return uVar4;
}

