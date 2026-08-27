/* FUN_1407b214 @ 0x1407b214 */

undefined4 FUN_1407b214(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  
  iVar1 = DAT_1407b414;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  if ((*(char *)(iVar1 + 0x12) == '\0') || (*(char *)(iVar1 + 0x13) == '\0')) {
    uVar3 = (uint)(*(byte *)(param_3 + 2) >> 4);
    if (-1 < (int)((uint)*(byte *)(param_3 + 2) << 0x1a)) {
      if (-1 < (int)(uVar3 << 0x1f)) goto LAB_1407b342;
      goto LAB_1407b23c;
    }
LAB_1407b2b8:
    uVar4 = 2;
    *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf | 0x20;
LAB_1407b2c2:
    uVar3 = (uint)*(byte *)(param_3 + 2);
    if (-1 < (int)(uVar3 << 0x1f)) goto LAB_1407b250;
LAB_1407b2cc:
    *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf0 | 1;
LAB_1407b2d6:
    bVar6 = *(byte *)(param_3 + 3);
    if (-1 < (int)((uint)bVar6 << 0x1b)) goto LAB_1407b26a;
LAB_1407b2e0:
    *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xf | 0x10;
  }
  else {
    uVar3 = (uint)(*(byte *)(param_3 + 2) >> 4);
    if (-1 < (int)((uint)*(byte *)(param_3 + 2) << 0x1b)) {
      if ((int)(uVar3 << 0x1e) < 0) goto LAB_1407b2b8;
LAB_1407b342:
      if ((int)(uVar3 << 0x1d) < 0) {
        uVar4 = 4;
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf | 0x40;
      }
      else {
        if (-1 < (int)(uVar3 << 0x1c)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_1407b41c,uVar3,uVar3 << 0x1c,param_4);
        }
        uVar4 = 8;
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf | 0x80;
      }
      goto LAB_1407b2c2;
    }
LAB_1407b23c:
    uVar4 = 1;
    *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf | 0x10;
    uVar3 = (uint)*(byte *)(param_3 + 2);
    if ((int)(uVar3 << 0x1f) < 0) goto LAB_1407b2cc;
LAB_1407b250:
    if (-1 < (int)(uVar3 << 0x1e)) {
      if ((int)(uVar3 << 0x1d) < 0) {
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf0 | 4;
      }
      else {
        if (-1 < (int)(uVar3 << 0x1c)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_1407b420,uVar3 & 0xf,uVar4,param_4);
        }
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf0 | 8;
      }
      goto LAB_1407b2d6;
    }
    *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf0 | 2;
    bVar6 = *(byte *)(param_3 + 3);
    if ((int)((uint)bVar6 << 0x1b) < 0) goto LAB_1407b2e0;
LAB_1407b26a:
    uVar3 = (uint)(bVar6 >> 4);
    if ((int)(uVar3 << 0x1e) < 0) {
      *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xf | 0x20;
      bVar6 = *(byte *)(param_3 + 3);
      goto joined_r0x1407b2f2;
    }
    if ((int)(uVar3 << 0x1d) < 0) {
      *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xf | 0x40;
    }
    else {
      if (-1 < (int)(uVar3 << 0x1c)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1407b424,uVar3,uVar4,param_4);
      }
      *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xf | 0x80;
    }
  }
  bVar6 = *(byte *)(param_3 + 3);
joined_r0x1407b2f2:
  if ((int)((uint)bVar6 << 0x1d) < 0) {
    *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xf3 | 4;
    bVar6 = *(byte *)(param_3 + 3);
  }
  else {
    uVar3 = (bVar6 & 0xf) >> 2;
    if (-1 < (int)(uVar3 << 0x1e)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1407b418,uVar3,uVar4,param_4);
    }
    *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xf3 | 8;
    bVar6 = *(byte *)(param_3 + 3);
  }
  if ((int)((uint)bVar6 << 0x1f) < 0) {
    *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xfc | 1;
  }
  else if ((int)((uint)bVar6 << 0x1e) < 0) {
    *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) & 0xfc | 2;
  }
  bVar6 = *(byte *)(param_3 + 4);
  if (bVar6 < 2) {
    bVar6 = 2;
  }
  uVar3 = FUN_1407b1a0(uVar4);
  uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 8) + 2) + 3);
  if (uVar3 < uVar5) {
    uVar5 = FUN_1407b1a0(*(byte *)((int)param_2 + 2) >> 4,*(byte *)((int)param_2 + 2) & 0xf);
  }
  bVar2 = *(byte *)(param_3 + 5);
  if ((int)uVar5 < (int)(uint)bVar2) {
    uVar3 = FUN_1407b1a0(*(byte *)((int)param_2 + 2) >> 4,*(byte *)((int)param_2 + 2) & 0xf);
    bVar2 = *(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 8) + 2) + 3);
    if (uVar3 < bVar2) {
      bVar2 = FUN_1407b1a0(*(byte *)((int)param_2 + 2) >> 4,*(byte *)((int)param_2 + 2) & 0xf);
    }
  }
  *(byte *)(param_2 + 1) = bVar6;
  *(byte *)((int)param_2 + 5) = bVar2;
  return 0;
}

