/* FUN_10044258 @ 0x10044258 */

void FUN_10044258(void)

{
  undefined *puVar1;
  char *pcVar2;
  char local_19;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  puVar1 = PTR_DAT_100442dc;
  local_c = *(int *)PTR_DAT_100442d4;
  pcVar2 = (char *)(**(code **)(PTR_DAT_100442d8 + 0x14))();
  local_19 = *pcVar2;
  FUN_100a5b78(DAT_100442e4 | ((int)puVar1 - (int)PTR_DAT_100442e0) * 0x20 & 0xff00U,DAT_100442ec,
               DAT_100442e8);
  local_19 = local_19 == '\0';
  local_18 = 0x708;
  local_14 = &local_19;
  local_10 = 0x80001;
  FUN_100506fc(&local_18);
  if (*(int *)PTR_DAT_100442d4 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

