<?php
/**
 * @file
 * SPARQL Views relationship handler.
 */

/**
 * Simple relationship handler that allows traversing a graph through
 * relationships between resources.
 */
class sparql_views_handler_relationship extends views_handler_relationship {
  /**
   * We override the query function to avoid the call to ensure_mytable. We
   * aren't using tables, so we don't need to ensure one.
   */
  function query() {
  }
}
