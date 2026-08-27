/* FUN_2c5057b0 @ 0x2c5057b0 */

/* WARNING: Removing unreachable block (ram,0x2c5d76ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5057b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xf] != 0) {
    lv_obj_add_flag_invalidate(param_1[0xf],1);
  }
  if (param_1[0x16] != 0) {
    lv_obj_add_flag_invalidate(param_1[0x16],1);
  }
  if ((char)param_1[0xe] == *(char *)((int)param_1 + 0xd)) {
    uVar1 = 1;
    iVar2 = 0;
  }
  else {
    if ((char)param_1[0x15] != *(char *)((int)param_1 + 0xd)) goto LAB_2c5057dc;
    uVar1 = 2;
    iVar2 = 1;
  }
  (**(code **)(*(int *)param_1[2] + 0x4c))((int *)param_1[2],_LAB_2c505878,uVar1);
  uVar1 = FUN_2c503ed8();
  func_0x2c50407c(uVar1,*(undefined1 *)((int)param_1 + 0xd));
  func_0x2c5e3388(*(undefined1 *)((int)param_1 + 0xd));
  iVar3 = param_1[8];
  uVar1 = registry_lookup(_LAB_2c50587c);
  FUN_2c638730(iVar3,uVar1);
  iVar3 = param_1[9];
  uVar1 = registry_lookup(_LAB_2c505880);
  FUN_2c638730(iVar3,uVar1);
  iVar3 = 0;
  if (param_1[iVar2 * 7 + 0xf] != 0) {
    FUN_2c606abc(param_1[iVar2 * 7 + 0xf],1);
    iVar3 = param_1[iVar2 * 7 + 0xf];
  }
  FUN_2c50ec60(param_1 + 0xbc,iVar3);
  FUN_2c50ec60(param_1 + 0xe3,param_1[iVar2 * 7 + 0x11]);
LAB_2c5057dc:
  if (*(code **)(*param_1 + 0x3c) == _LAB_2c505874) {
                    /* WARNING: Could not recover jumptable at 0x2c5d769a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_2c5d769a::switchdataD_2c5d769e + (uint)BYTE_2c5d76a3 * 2))(5,0,0xffffffff,0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c5057fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))(param_1);
  return;
}

