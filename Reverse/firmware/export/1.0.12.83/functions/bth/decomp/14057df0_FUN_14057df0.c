/* FUN_14057df0 @ 0x14057df0 */

void FUN_14057df0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char local_1d;
  int local_1c;
  
  local_1c = *DAT_14057ef8;
  local_1d = '\0';
  if ((param_3 == 0) &&
     (param_3 = (*(code *)*param_1)(param_1,param_2,&local_1d), iVar2 = DAT_14057efc, param_3 == 0))
  {
    if (local_1d == '\0') goto LAB_14057e1a;
    if (((*(byte *)(param_1 + 0x61) < 2) &&
        (iVar1 = *(int *)(DAT_14057efc + (uint)*(byte *)(param_1 + 0x61) * 4), iVar1 != 0)) &&
       ((*(byte *)(iVar1 + 0x43) & 0x10) != 0)) {
      FUN_14059ce4(param_1);
      FUN_1405fddc();
    }
    else {
      FUN_14059ce4(param_1);
      iVar1 = 0;
      FUN_1405fddc();
    }
    FUN_1405c378(iVar1,1,*(undefined1 *)((int)param_1 + 0x186),*(byte *)((int)param_1 + 0x189) & 1);
    (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined1 *)(param_1 + 0x61),param_1[3]);
    *(undefined1 *)(iVar1 + 0x56) = *(undefined1 *)((int)param_1 + 0x18d);
    if ((*(ushort *)(iVar1 + 0x3a) & 0x24) == 0x24) {
      FUN_1405c424(*(undefined1 *)(param_1 + 0x61));
    }
  }
  else {
    iVar2 = DAT_14057efc;
    local_1d = '\x01';
    if (*(byte *)(param_1 + 0x61) < 2) {
      iVar1 = *(int *)(DAT_14057efc + (uint)*(byte *)(param_1 + 0x61) * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x43) & 0x10) == 0)) {
        iVar1 = 0;
      }
      FUN_14059ce4(param_1);
      FUN_1405fddc();
    }
    else {
      FUN_14059ce4(param_1);
      iVar1 = 0;
      FUN_1405fddc();
      iVar2 = DAT_14057efc;
    }
    (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))
              (*(undefined1 *)(iVar1 + 0x42),*(undefined4 *)(iVar1 + 0x3c),param_3);
  }
  FUN_14074168(*(undefined4 *)(iVar1 + 0x50));
  *(undefined4 *)(iVar1 + 0x50) = 0;
LAB_14057e1a:
  if (*DAT_14057ef8 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

