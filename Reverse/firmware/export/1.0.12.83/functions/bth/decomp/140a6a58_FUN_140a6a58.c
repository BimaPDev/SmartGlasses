/* FUN_140a6a58 @ 0x140a6a58 */

void FUN_140a6a58(int param_1)

{
  undefined1 local_bc [4];
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined2 local_18;
  undefined1 local_16;
  int local_14;
  
  local_14 = *DAT_140a6b6c;
  FUN_1402a6e8(4,0x1d0,DAT_140a6b74,DAT_140a6b70,DAT_140a6b64,DAT_140a6b68,param_1);
  FUN_140e5658(local_bc,0,0x54);
  FUN_140e5658(local_68,0,0x54);
  FUN_140a747c(0);
  FUN_140a747c(1);
  if (param_1 == 1) {
    local_bc[0] = 1;
    local_6a = 0;
    local_b8 = 5000;
    local_6c = 0x101;
    FUN_140a7478(0,local_bc);
    FUN_140a7474(0);
  }
  else if (param_1 == 2) {
    local_64 = 5000;
    local_68[0] = 1;
    local_18 = 0x101;
    local_16 = 0;
    FUN_140a7478(1,local_68);
    FUN_140a7474(1);
  }
  else {
    local_b8 = 300;
    local_b0 = 300;
    local_64 = 300;
    local_5c = 300;
    local_6c = 2;
    local_18 = 0x102;
    local_bc[0] = 0;
    local_b4 = 1;
    local_6a = 1;
    local_68[0] = 1;
    local_60 = 0;
    local_16 = 1;
    FUN_140a7478(0,local_bc);
    FUN_140a7474(0);
    FUN_140a7478(1,local_68);
    FUN_140a7474(1);
  }
  if (*DAT_140a6b6c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

