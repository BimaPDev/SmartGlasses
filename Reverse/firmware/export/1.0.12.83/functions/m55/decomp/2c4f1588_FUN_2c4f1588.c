/* FUN_2c4f1588 @ 0x2c4f1588 */

void FUN_2c4f1588(int param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,int param_6,
                 uint param_7,uint param_8,ushort param_9,ushort param_10,short param_11,
                 code *param_12,undefined4 param_13)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  puVar3 = (uint *)(uint)param_9;
  local_34 = *DAT_2c4f17ac;
  puVar1 = param_2;
LAB_2c4f15d2:
  do {
    uVar5 = param_4;
    if ((int)(param_4 << 0x16) >> 0x16 == -1) {
      uVar5 = param_4 + 1;
    }
    uVar5 = (uVar5 & 0x3ff) + param_3 + 4;
    if (uVar5 < param_2[3]) {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x68) + 0x20);
      if ((uVar2 <= *param_2) || (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < uVar5 + 4)) {
        lVar7 = CONCAT44(uVar2,0xffffffac);
        goto LAB_2c4f1644;
      }
      lVar7 = FUN_2c4f0eb4(param_1,0,param_1,4,*param_2,uVar5,&local_40,4);
      puVar1 = (uint *)((ulonglong)lVar7 >> 0x20);
      if ((int)lVar7 != 0) goto LAB_2c4f1644;
      local_38 = uVar5 + 4;
      local_3c = *param_2;
      puVar6 = &local_3c;
      local_40 = (local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8
                 | local_40 >> 0x18) ^ param_4 | 0x80000000;
      param_4 = local_40;
    }
    else {
      if (param_6 < 1) {
        lVar7 = ZEXT48(puVar1) << 0x20;
        goto LAB_2c4f1644;
      }
      local_40 = *param_5;
      param_6 = param_6 + -1;
      puVar6 = (uint *)param_5[1];
      param_5 = param_5 + 2;
      uVar5 = param_3;
    }
    param_3 = uVar5;
  } while (((param_8 ^ local_40) & param_7 & DAT_2c4f17b0) != 0);
  if ((param_7 & 0x3ffffff) >> 10 != 0) {
    lVar7 = FUN_2c4f1588(param_1,param_2,uVar5,param_4,param_5,param_6,0,0,0,0,0,DAT_2c4f17b4,
                         &local_40);
    if ((int)lVar7 < 0) goto LAB_2c4f1644;
    puVar1 = (uint *)((ulonglong)lVar7 >> 0x20);
    if ((((int)lVar7 != 0) ||
        (puVar4 = (uint *)((local_40 & 0xfffff) >> 10), puVar1 = (uint *)(uint)param_10,
        (uint *)(uint)param_10 <= puVar4)) || (puVar1 = puVar3, puVar4 < puVar3)) goto LAB_2c4f15d2;
  }
  uVar5 = (local_40 & 0x7fffffff) >> 0x14;
  if (uVar5 != 0) {
    if (uVar5 == 0x101) {
      lVar7 = FUN_2c4f1588(param_1,puVar6,0,0xffffffff,0,0,DAT_2c4f17b8,0x20000000,local_40 & 0x3ff,
                           (local_40 & 0x3ff) + 1,
                           (int)(short)(((ushort)((local_40 << 0xc) >> 0x16) -
                                        (ushort)((local_40 << 0x16) >> 0x16)) + param_11),param_12,
                           param_13);
    }
    else {
      if (uVar5 == 0x102) {
        puVar1 = (uint *)0x101;
        if ((local_40 & 0x3ff) != 0) {
          uVar5 = 0;
          do {
            lVar7 = (*param_12)(param_13,puVar6[2] |
                                         (((local_40 & 0xfffff) >> 10) + (int)param_11) * 0x400 |
                                         ((byte)*puVar6 + 0x300) * 0x100000,puVar6[1]);
            puVar1 = (uint *)((ulonglong)lVar7 >> 0x20);
            if ((int)lVar7 != 0) goto LAB_2c4f1644;
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 3;
          } while (uVar5 < (local_40 & 0x3ff));
        }
        goto LAB_2c4f15d2;
      }
      lVar7 = (*param_12)(param_13,param_11 * 0x400 + local_40,puVar6);
    }
    puVar1 = (uint *)((ulonglong)lVar7 >> 0x20);
    if ((int)lVar7 != 0) {
LAB_2c4f1644:
      if ((*DAT_2c4f17ac ^ local_34) != 0) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),*DAT_2c4f17ac ^ local_34,0);
      }
      return;
    }
  }
  goto LAB_2c4f15d2;
}

