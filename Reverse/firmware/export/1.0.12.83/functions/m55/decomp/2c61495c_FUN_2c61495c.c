/* FUN_2c61495c @ 0x2c61495c */

void FUN_2c61495c(undefined4 *param_1,short *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)lv_mem_alloc(param_3 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    iVar6 = param_3 + -1;
    uVar3 = 0;
    *puVar2 = *(undefined4 *)param_2;
    if (0 < iVar6) {
      uVar4 = 0;
      do {
        while( true ) {
          uVar5 = uVar4 + 1 & 0xffff;
          if ((param_2[uVar4 * 2] != param_2[uVar4 * 2 + 2]) ||
             (param_2[uVar4 * 2 + 1] != param_2[uVar4 * 2 + 3])) break;
          uVar4 = uVar5;
          if (iVar6 <= (int)uVar5) goto LAB_2c6149ca;
        }
        puVar2[uVar3] = *(undefined4 *)(param_2 + uVar4 * 2);
        uVar3 = uVar3 + 1 & 0xffff;
        uVar4 = uVar5;
      } while ((int)uVar5 < iVar6);
    }
LAB_2c6149ca:
    if ((*param_2 != param_2[param_3 * 2 + -2]) || (param_2[1] != param_2[param_3 * 2 + -1])) {
      puVar2[uVar3] = *(undefined4 *)(param_2 + param_3 * 2 + -2);
      uVar3 = uVar3 + 1 & 0xffff;
    }
    uVar1 = DAT_2c614a08;
    param_1[2] = puVar2;
    *(short *)(param_1 + 3) = (short)uVar3;
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = 5;
  }
  return;
}

