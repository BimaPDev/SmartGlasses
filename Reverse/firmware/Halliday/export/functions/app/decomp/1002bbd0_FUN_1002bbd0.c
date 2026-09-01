/* FUN_1002bbd0 @ 0x1002bbd0 */

void FUN_1002bbd0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_1e;
  char local_1d;
  int local_1c;
  
  local_1c = *DAT_1002bc68;
  iVar1 = (**(code **)(DAT_1002bc6c + 0xc))();
  uVar2 = (uint)*(byte *)(param_2 + 2);
  if (iVar1 != 1) goto LAB_1002bc40;
  FUN_10043680(uVar2,&local_1e,&local_1d);
  uVar3 = DAT_1002bc74;
  if (local_1d == '\0') {
    uVar3 = DAT_1002bc70;
  }
  FUN_10097aec(param_1,DAT_1002bc78,(uint)*(ushort *)(param_2 + 6) % 100,
               *(undefined1 *)(param_2 + 4),*(undefined1 *)(param_2 + 3),local_1e,
               *(undefined1 *)(param_2 + 1),uVar3);
  while( true ) {
    if (*DAT_1002bc68 == local_1c) break;
    uVar2 = FUN_1013cdc0();
LAB_1002bc40:
    FUN_10097aec(param_1,DAT_1002bc7c,(uint)*(ushort *)(param_2 + 6) % 100,
                 *(undefined1 *)(param_2 + 4),*(undefined1 *)(param_2 + 3),uVar2,
                 *(undefined1 *)(param_2 + 1));
  }
  return;
}

