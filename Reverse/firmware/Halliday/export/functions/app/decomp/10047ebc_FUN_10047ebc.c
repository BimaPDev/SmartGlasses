/* FUN_10047ebc @ 0x10047ebc */

void FUN_10047ebc(void)

{
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 auStack_2c [8];
  undefined2 local_24;
  undefined2 local_22;
  undefined1 local_20;
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_10047f44;
  local_30 = *(undefined2 *)PTR_DAT_10047f48;
  local_2e = PTR_DAT_10047f48[2];
  local_3c = 0;
  local_38 = (undefined1 *)0x0;
  local_34 = 0;
  FUN_1011ea48(auStack_2c,0,0xd);
  FUN_1013d306(auStack_2c,0,0xd,PTR_DAT_10047f4c,1);
  local_24 = 0x200;
  local_30 = CONCAT11(local_30._1_1_,1);
  local_20 = local_2e;
  local_22 = local_30;
  local_3c = CONCAT22(local_3c._2_2_,0x202);
  local_34 = CONCAT13(local_34._3_1_,0xd);
  local_38 = auStack_2c;
  FUN_100506fc(&local_3c);
  if (*(int *)PTR_DAT_10047f44 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

