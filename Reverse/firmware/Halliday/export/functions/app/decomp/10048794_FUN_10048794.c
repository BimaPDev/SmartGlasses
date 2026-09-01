/* FUN_10048794 @ 0x10048794 */

void FUN_10048794(void)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  int local_c;
  
  iVar1 = DAT_100487f0;
  local_c = *DAT_100487ec;
  local_10 = (*(code *)**(undefined4 **)(DAT_100487f0 + 0x34))();
  local_f = (*(code *)**(undefined4 **)(iVar1 + 0x38))();
  local_1c = 0xb02;
  local_18 = &local_10;
  local_14 = 2;
  FUN_100506fc(&local_1c);
  if (*DAT_100487ec != local_c) {
    FUN_1013cdc0();
  }
  return;
}

