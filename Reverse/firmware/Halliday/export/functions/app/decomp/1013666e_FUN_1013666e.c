/* FUN_1013666e @ 0x1013666e */

void FUN_1013666e(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 local_24;
  byte local_23;
  undefined1 local_22;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_1011ea48(&local_24,0,0x14);
  local_24 = (undefined1)param_2;
  local_20 = FUN_10131c1c(param_1);
  local_1c = FUN_10136428(param_1);
  switch(param_2) {
  case 2:
    local_22 = (undefined1)param_3;
    break;
  case 3:
    local_18 = FUN_100d5f98(param_1);
    local_23 = local_23 & 0xfe | param_3 != 0;
  case 4:
  case 6:
    bVar1 = FUN_1013662e(param_1);
    local_23 = local_23 & 0xfd | (bVar1 & 1) << 1;
  }
  FUN_100d9174(param_1);
  FUN_100d4038(1,&local_24);
  return;
}

