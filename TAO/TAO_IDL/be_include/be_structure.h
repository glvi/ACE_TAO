/* -*- c++ -*- */
// ============================================================================
//
// = LIBRARY
//    TAO IDL
// 
// = FILENAME
//    be_structure.h
//
// = DESCRIPTION
//    Extension of class AST_Structure that provides additional means for C++
//    mapping.
//
// = AUTHOR
//    Copyright 1994-1995 by Sun Microsystems, Inc.
//    and 
//    Aniruddha Gokhale
// 
// ============================================================================

#if !defined (BE_STRUCTURE_H)
#define BE_STRUCTURE_H

/*
 * BE_Structure
 */
class be_structure : public virtual AST_Structure,
                     public virtual be_scope,
                     public virtual be_type
{
public:
  // =Operations

  be_structure (void);
  // default constructor

  be_structure (UTL_ScopedName *n, UTL_StrList *p);
  // constructor

  virtual int gen_client_header (void);
  // Generates the client-side header information for the struct 

  virtual int gen_client_stubs (void);
  // Generates the client-side stubs for the struct

  virtual int gen_server_header (void);
  // Generates the server-side header information for the struct 

  virtual int gen_server_skeletons (void);
  // Generates the server-side skeletons for the struct

  virtual int gen_client_inline (void);
  // Generates the client-side inline for the struct

  virtual int gen_server_inline (void);
  // Generates the server-side inlines for the struct

  virtual int gen_typecode (void);
  // generate the typecode

  virtual long tc_encap_len (void);
  // return the total byte length of ourselves represented as an encapsulation

  virtual int member_count (void);
  // return the count of members

  // Narrowing
  DEF_NARROW_METHODS3 (be_structure, AST_Structure, be_scope, be_type);
  DEF_NARROW_FROM_DECL (be_structure);
  DEF_NARROW_FROM_SCOPE (be_structure);

private:
  //=helper

  int compute_member_count (void);
  // count the number of members

  int member_count_;
  // number of members
};

#endif
