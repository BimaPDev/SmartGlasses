/* FUN_100721c0 @ 0x100721c0 */

int FUN_100721c0(void)

{
  int iVar1;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  
  FUN_1011f738(auStack_28);
  FUN_1011f738(auStack_20);
  FUN_1011f738(auStack_18);
  FUN_1011f738(auStack_10);
  local_30 = thunk_FUN_10115958();
  iVar1 = FUN_1011dabe(DAT_10072204,auStack_28,0x20,&local_30,8);
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_10072208);
  }
  return iVar1;
}

